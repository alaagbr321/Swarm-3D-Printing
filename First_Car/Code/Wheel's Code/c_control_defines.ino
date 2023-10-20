
#define   FORWARD_  0
#define   BACKWARD_ 1
#define   RIGHT_    2
#define   LEFT_     3

#define DELAY       400
#define READ_DELAY  15

#define SMALL_STEP  1
#define MEDIUM_STEP 2
#define LARGE_STEP  3

//PINS Definition

/* pointer to function definitions */
void (*cw)();
void (*ccw)();
void (*north)();
void (*south)();
void (*east)();
void (*west)();

void (*s1)();
void (*s2)();
void (*s3)();
void (*s4)();

void (*s5)();
void (*s6)();
void (*s7)();
void (*s8)();

int (*forw)();
int (*back)();
int (*lf)();
int (*rt)();

/* global variables */
//previous readings in case no line detected
int back_prev = 0;  
int front_prev = 0;
//variables for storing sensor readings
int fwdbwd = 0;
int lftrit = 0;
int steps = 0;
