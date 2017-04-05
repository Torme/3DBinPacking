#ifndef BINPACK_H_
# define BINPACK_H_

#include <time.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

void initialize(void);
void read_boxlist_input(void);
void execute_iterations(void); //TODO: Needs a better name yet
void list_candidate_layers(void);
int compute_layer_list(const void *i, const void *j);
int pack_layer(void);
int find_layer(short int thickness);
void find_box(short int hmx, short int hy, short int hmy, short int hz, short int hmz);
void analyze_box(short int hmx, short int hy, short int hmy, short int hz,
		 short int hmz, short int dim1, short int dim2, short int dim3);
void find_smallest_z(void);
void checkfound(void); //TODO: Find better name for this
void volume_check(void);
void write_visualization_data_file(void);
void write_boxlist_file(void);
void report_results(void);
void print_help(void);

char strpx[5], strpy[5], strpz[5];
char strcox[5], strcoy[5], strcoz[5];
char strpackx[5], strpacky[5], strpackz[5];

char *filename = NULL;
char packing;
char layerdone;
char evened;
char variant;
char best_variant;
char packingbest;
char hundredpercent;
char graphout[]="visudat";
char unpacked;

short int boxx, boxy, boxz, boxi;
short int bboxx, bboxy, bboxz, bboxi;
short int cboxx, cboxy, cboxz, cboxi;
short int bfx, bfy, bfz;
short int bbfx, bbfy, bbfz;
short int xx, yy, zz;
short int pallet_x, pallet_y, pallet_z;

short int total_boxes;
short int x;
short int n;
short int layerlistlen;
short int layerinlayer;
short int prelayer;
short int lilz;
short int number_of_iterations;
short int hour;
short int min;
short int sec;
short int layersindex;
short int remainpx, remainpy, remainpz;
short int packedy;
short int prepackedy;
short int layerthickness;
short int itelayer;
short int preremainpy;
short int best_iteration;
short int packednumbox;
short int number_packed_boxes;

double packedvolume;
double best_solution_volume;
double total_pallet_volume;
double total_box_volume;
double temp;
double pallet_volume_used_percentage;
double packed_box_percentage;
double elapsed_time;

struct	boxinfo
{
  char is_packed;
  short int dim1, dim2, dim3, n, cox, coy, coz, packx, packy, packz;
  long int vol;
}	boxlist[5000];

struct layerlist
{
  long int layereval;
  short int layerdim;
} layers[1000];

struct scrappad
{
  struct scrappad *prev, *next;
  short int cumx, cumz;
};

struct scrappad *scrapfirst, *scrapmemb, *smallestz, *trash;

time_t start, finish;

FILE *boxlist_input_file, *report_output_file, *visualizer_file;

char version[] = "0.01";

#endif // BINPACK_H_
