#ifndef VISUAL_H_
# define VISUAL_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <graphics.h>

void Initialize(void);
void Pack(void);
void PutBox(void);
void SayGoodbye(void);
void Pause(void);
void MainWindow(char *header);
void StatusLine(char *msg);
void DrawBorder(void);
void changetextstyle(int font, int direction, int charsize);
int gprintf(int *xloc, int *yloc, char *fint,...);

int GraphDriver;                            /* The Graphics device driver */
int GraphMode;                              /* The Graphics mode value */
double AspectRatio;                         /* Aspect ratio of a pixel on the screen*/
int MaxX, MaxY;                             /* The maximum resolution of the screen */
int MaxColors;                              /* The maximum # of colors available */
int ErrorCode;                              /* Reports any graphics errors */
struct palettetype palette;                 /* Used to read palette info */

struct dataarray {
  int cx, cy, cz, pax, pay, paz;
} data[2000];

int px, py, pz, cox, coy, coz, packx, packy, packz, a, b, index, currenty, q;

double max, sc;

char strpx[8], strpy[8], strpz[8], oldstrcoy[8], strcox[8], strcoy[8], strcoz[8], strpackx[8], strpacky[8], strpackz[8];

FILE *igf;

#endif // !VISUAL_H_
