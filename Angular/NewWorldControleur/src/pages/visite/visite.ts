import { Component } from '@angular/core';
import { IonicPage, NavController, NavParams } from 'ionic-angular';

import { ModelProducteur } from '../../models/ModelProducteur';

import { Producteur } from '../../providers/producteur';

/**
 * Generated class for the Visite page.
 *
 * See http://ionicframework.com/docs/components/#navigation for more info
 * on Ionic pages and navigation.
 */
@IonicPage()
@Component({
  selector: 'page-visite',
  templateUrl: 'visite.html',
})
export class Visite {

  producteurs : ModelProducteur[];

  constructor(public navCtrl: NavController, public navParams: NavParams, private producteur: Producteur) {
  	producteur.load().subscribe(producteurs => { 
  		this.producteurs = producteurs;
  		// console.log("bonjour" , this.producteurs);
  	})
  }

}
