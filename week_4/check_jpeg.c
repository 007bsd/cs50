#include<stdio.h>
#include<cs50.h>

int main(int argc, char *argv[]){
  if (argc !=2){
    return 1;
  }

  // open file
  FILE *file = fopen(argv[1], "r");
  if (file == NULL)
  {
    return 1;
  }

  // read bytes from the file
  unsigned char bytes[3];
  fread(bytes, 3, 1, file);


  // check if bytes are 0xff, 0xd8, oxff

  if(bytes[0] == 0xff && bytes[1] == 0xd8 && bytes[2]== 0xff){
    printf("maybe\n");
  }
  else{
    printf("Not a gif\n");
  }

}
