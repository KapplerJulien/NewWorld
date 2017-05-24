import { Component } from '@angular/core';

import { Visite } from '../visite/visite';
import { Map } from '../map/map';

@Component({
  templateUrl: 'tabs.html'
})
export class TabsPage {

  tab1Root = Visite;
  tab2Root = Map;

  constructor() {

  }
}
