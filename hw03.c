#include <stdio.h>

typedef enum {
  NAME_ONLY = 0,
  MAJOR_AND_NAME = 1, 
  YEAR_AND_NAME = 2
} Mode;

typedef struct {
  char *first_name;
  char *last_name;
  char *major_field;
  char *year; 
  // TODO: add fields here for major and year
} Student;

void print_student(Mode m, Student s) {
  switch (m) {
    case NAME_ONLY:
      printf("%s %s\n", s.first_name, s.last_name);
      break;
	case MAJOR_AND_NAME:
	  printf("%s %s %s\n", s.major_field, s.first_name, s.last_name);
	  break;
	 case YEAR_AND_NAME:
	  printf("%s %s %s\n", s.year, s.first_name, s.last_name);
	  break;
	// TODO: handle other cases
  }
}

/*
	argv[1] will be the Mode integer
	argv[2...] will be student info in the form [first_name, last_name, major, year]
	the fields are all strings (char[])
	except year is a number (int)
*/
int main(int argc, char* argv[]) {
  for (int i = 2; i < (argc - 1); i = i+4){
  Student si;
  si.first_name = argv[i];
  si.last_name = argv[i+1];
  si.major_field = argv[i+2];
  si.year = argv[i+3];
  print_student(argv[1][0], si);
  }
  return 0;
  
  // TODO: parse argv to populate student structs 
  // for now, here's two hardcoded students:

}
