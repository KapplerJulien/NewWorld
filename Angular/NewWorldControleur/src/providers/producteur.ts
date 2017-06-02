import { Injectable } from '@angular/core';
import { Http } from '@angular/http';
import { Observable } from 'rxjs/Rx';
import 'rxjs/add/operator/map';

import { ModelProducteur } from '../models/ModelProducteur';

/*
  Generated class for the Producteur provider.

  See https://angular.io/docs/ts/latest/guide/dependency-injection.html
  for more info on providers and Angular 2 DI.
*/
@Injectable()
export class Producteur {

  jsonApiUrl = 'http://172.29.56.8/~jkappler/MDB Free/json/producteur.php';
  constructor(public http: Http) { }

  	load(): Observable<ModelProducteur[]>{
  		//console.log(this.jsonApiUrl);
  		//console.log(this.http.get(`${this.jsonApiUrl}?idControleur=2`));

  		return this.http.get(`${this.jsonApiUrl}?idControleur=2`).map(res => <ModelProducteur[]>res.json());
  	}

}
