# YSoft IOTA Play box
![IOTA Play Box](https://github.com/ysoftiota/yi-play/blob/master/Box/box.png)

## Features
* The model is configurable - it contains all possible features for development or it can be used as a standalone box for outside use
  * configurable inner height
  * configurable spacers (for use with Arduino or prototyping shields)
  * buttons absent/present
  * led holes absent/present
  * logo absent/present
  * different connector holes absent/present
  * top/bottom mounting holes absent/present
* Printable on [YSoft be3D eDee](https://www.ysoft.com/en/be3d-edee-3dprinter) printers

## Manufacturing procedure
1. Download [stl/obj files](https://github.com/ysoftiota/yi-play/blob/master/Box/IOTA_Play_Box_1.1.zip) or export them using FreeCAD from [model](https://github.com/ysoftiota/yi-play/blob/master/Box/IOTA_Play_Box_1.1.FCStd). Please note that FreeCAD version 0.16 or higher is required.
1. Select the models to print in DeeControl, layout is recommended the following:
![print](https://github.com/ysoftiota/yi-play/blob/master/Box/print.png)
1. You can print either on Normal (150um) or Draft mode (200um)
1. Make sure you have supports off and that all the settings on the advanced tab are reset to default
1. Always thoroughly clean the print bed (by water and dry it afterwards) so that the box surface is nice and shiny
1. Apply the glue in uniform thin layer over the whole surface of the print bed. Make sure there are no spots without the glue because the large surfaces have tendencies to pick up.
1. The print will take 3-4h depending on quality selected
1. After printing it may be necessary to clean the buttons and button holes by a sharp knife so that the buttons move freely
1. If the buttons are not printed correctly, print them separately using slower speed or better quality.
1. You can glue the button holder on the centering pins or you can use soldering iron to melt them.
1. 4 screws are required. Screws ![Bossard 2001225](https://eu.shop.bossard.com/mk/cz/10316/zavitorezne-srouby-vrtaci-srouby-zavitotvareci-srouby/srouby-do-termoplastu/bn-13576_srouby-pt-174-se-zapustnou-hlavou-s-krizovou-drazkou-phillips-typ-h) or longer for larger boxes ![Bossard 3034352](https://eu.shop.bossard.com/mk/cz/10305/zavitorezne-srouby-vrtaci-srouby-zavitotvareci-srouby/srouby-do-termoplastu/bn-82427_srouby-se-zapustnou-hlavou-s-krizovou-drazkou-pozidriv-typ-z) are ideally suited.
1. Please remember to remove the white cover from the temperature/humidity sensor before use.
1. Enjoy your IOTA Play in the box

## Configuring the model
1. Open the FCStd file in FreeCad 0.16 or higher (in older versions you will not see the spreadsheet)
1. Open the model_parameters spread sheet from Combo View panel:
   ![IOTA Play Box](https://github.com/ysoftiota/yi-play/blob/master/Box/model_parameters.png)
1. Select model height and which parts you need and which you don't. 1 means object enabled, 0 means object disabled.
1. Rewiew the changes you made, the model is transparent.
1. Click on 'top' part from Combo view (the part will turn green) and go to File -> Export. Select STL Mesh or Wavefront OBJ for the export format.
1. Repeat for 'bottom' and 'buttons' parts.
1. Follow the manufacturing procedure above

## Pictures
![IOTA Play Box](https://github.com/ysoftiota/yi-play/blob/master/Box/box1.png) 
![IOTA Play Box](https://github.com/ysoftiota/yi-play/blob/master/Box/box2.png)
![IOTA Play Box](https://github.com/ysoftiota/yi-play/blob/master/Box/box3.png)
![IOTA Play Box](https://github.com/ysoftiota/yi-play/blob/master/Box/box4.png)
