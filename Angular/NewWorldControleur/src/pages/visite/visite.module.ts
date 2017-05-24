import { NgModule } from '@angular/core';
import { IonicPageModule } from 'ionic-angular';
import { Visite } from './visite';

@NgModule({
  declarations: [
    Visite,
  ],
  imports: [
    IonicPageModule.forChild(Visite),
  ],
  exports: [
    Visite
  ]
})
export class VisiteModule {}
