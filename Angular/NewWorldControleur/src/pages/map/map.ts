import { Component, ViewChild, ElementRef } from '@angular/core';
import { IonicPage, NavController, NavParams } from 'ionic-angular';

import { ModelVisite } from '../../models/ModelVisite';

import { ControleurVisite } from '../../providers/controleur-visite';

declare var google;

/**
 * Generated class for the Map page.
 *
 * See http://ionicframework.com/docs/components/#navigation for more info
 * on Ionic pages and navigation.
 */
@IonicPage()
@Component({
  selector: 'page-map',
  templateUrl: 'map.html',
})
export class Map {

  @ViewChild('map') mapElement: ElementRef;
  map: any;
  start = 'gap, france';
  end = 'briançon, france';
  directionsService = new google.maps.DirectionsService;
  directionsDisplay = new google.maps.DirectionsRenderer;

  constructor(public navCtrl: NavController, public navParams: NavParams, private controleurVisite : ControleurVisite) 
  {//debut constructeur
    //appel du json
    controleurVisite.load().subscribe(waypts => { 
      this.waypts = waypts;
      console.log("dans le constructeur");
      console.log(this.waypts);
      this.calculateAndDisplayRoute();
    });

    //debogage des waypoints
    console.log(this.waypts);
    //on calcule la route et on l'affiche
    
  }//fin constructeur

  ionViewDidLoad() {
    this.initMap();
    // this.calculateAndDisplayRoute();
  }

   initMap() 
   {
    this.map = new google.maps.Map(this.mapElement.nativeElement, {
      zoom: 12,
      center: {lat: 44.556, lng: 6.079}
    });

    this.directionsDisplay.setMap(this.map);
  }
  // tableau des points de passage
  waypts = [];

  calculateAndDisplayRoute() {
  console.log("display route");
    this.directionsService.route({
      origin: this.start,
      destination: this.end,
      waypoints:this.waypts,
      // Pour ordonner les points
      optimizeWaypoints:true,
      travelMode: 'DRIVING',
      // pour calculer l'heure d'arriver (c'est en milliseconde)
      drivingOptions:{departureTime: new Date(Date.now() + 1000*60*20),trafficModel: 'optimistic'}
    }, (response, status) => {
      if (status === 'OK') {
        this.directionsDisplay.setDirections(response);
      } else {
        window.alert('Directions request failed due to ' + status);
      }
    });
  }
}
