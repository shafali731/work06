//Shafali Gupta
//Period 5
//Construction
//2018-10-03

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct classes {
  char *name;
  int seats;
};
char *class_names[] = {"calc", "english", "history", "physics", "systems",
"softDev", "macro", "biology", "chemistry", "spanish"};

struct classes random_class(){
  struct classes ran;
  ran.name = class_names[rand()%10];
  ran.seats = rand()%34;
  return ran;
}

void print_class(struct classes x){
  printf("Class name: %s\nNumber of seats remaining in the class: %d\n",x.name, x.seats);
}

void modify(struct classes * a, char *_name, int _seats ){
  a->name = _name;
  a->seats = _seats;
}
void main(){
  srand(time(NULL));
  struct classes examp;
  printf("============ random class 'examp' created ================\n");

  examp = random_class();
  print_class(examp);
  printf("============ modified class ================\n");
  modify(&examp, "western political thought", 24);
  print_class(examp);
}
