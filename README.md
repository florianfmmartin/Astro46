# _Astro46_

## Case Making

I used a piece of wood that was laying around. I started by cutting it into rectangles of approximately the good size. I then drilled and filled holes to accomodate the switches according to my layout. I made a layout using [KLE](http://www.keyboard-layout-editor.com/). I then made and printed a case layout with this [builder](http://builder.swillkb.com/). This is the following result.

![Face up layout](photos/case_flat.jpg)

![Side of layout](photos/case_side.jpg)

## Switches and Keycaps

Already owning a cheap mechanical keyboard with brown switches, I decided to stay with brown switches. I got Gateron Silents Browns of AliExpress.

![Gateron flat](photos/switch_sleep.jpg)

![Gateron side](photos/switch_up.jpg)

Then for the keycaps, I wanted something really cheap as I was thight on budget and so I went with some blank DSA also from AliExpress.

![Keycaps](photos/keycaps.jpg)

## Preparation Before Soldering

From now on, I mostly follow [this](https://www.youtube.com/watch?v=zY2k75eWrLQ) tutorial. So, I before taking out my soldering iron I glued the switches in place as I had some holes that were looser. I then put the keycaps on the switches to provide a smoother and more leveled surface for my plank to be turned upside down on. I finishes the preparation by bending my diodes in a similar manner as the tutorial proposes. Here's what it looks like.

![Switches in place](photos/case_switch_flat.jpg)

![Hot glue](photos/hot_glue.jpg)

![Keys flat](photos/case_keys_flat.jpg)

![Keys side](photos/case_keys_side.jpg)

## Soldering

I then moved on to soldering. The first things to solder are the diodes that were bent. The diodes form the rows of the switches matrix. And so after soldering all the diodes this is what it looks like.
![Diodes in](photos/diodes.jpg)

After the diodes were soldered, I put some hot glue on top of it to isolate them. I then proceeded to solder some simple wires to the columns of the matrix.

![Colmuns](photos/columns.jpg)

To finish the wiring of the switch matrix, I had to solder the rows from the two halves together. I did so by running one long wire per row into a shoe lace.

![Left lace](photos/left_row_lace.jpg)
![Right lace](photos/right_row_lace.jpg)
![Both lace](photos/both_lace.jpg)

The final soldering part is to solder the rows and columns to the micro controller.

I will put the micro controller in the left hand, so I have to send the rows of the right hand to the left hand first. I did so the same way as the last step, through a lace.

![Lace](photos/fil_focus.jpg)
![Lace wire](photos/fil_tape.jpg)

On the pro-micro controller there is fortunately for me exactly 18 available pins to connect the matrix to.

![Pro Micro Pinout](photos/pinout.png)

All the blue tagged pins are the one to which I connected the columns and row. Here is how that kinda looks.

![Pro Micro Bad Solderer](photos/pro_micro.jpg)

With that, the soldering is done!

## Final case touchs

To finish the case, I glued some wooden sticks to the edge of the top plate, glued the bottom plate and put foam underneath it to give it a slight adhesion.

![Wood side](photos/side_wood_foam.jpg)
![Foam both](photos/both_foam.jpg)
![Finish](photos/finish.jpg)

## Firmware Setup

To make the firmware I pasted the raw ouput of the layout I had previously made with KLE in a keyboard firmware [builder](https://kbfirmware.com/). I filled out all the information necessasry and downloaded the firmware made. I then proceeded to compile and flash the firmware to the pro micro with the qmk-cli. I followed [this](https://beta.docs.qmk.fm/using-qmk/guides/keyboard-building/hand_wire) QMK tutorial for the flashing of the board, which is also a all around good tutorial to follow for building your own handwired keyboard. I did all this using a kind of default layout which really did not fit me but was enough to test that everything was working.

## Layout (French)

This next part is about making a layout which fits my need and may be continually modified as I continue using this keyboard. As it's a layout for french, the following will be written in french ~~so~~ as it's easier for my brain.

Alors,

