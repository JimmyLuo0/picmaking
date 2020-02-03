#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int prime(int n){
  int prime = 1;
  for(int divide = 2; divide < n; divide++){
    if(!(n%divide))
      prime = 0;
  }
  if(n < 2)
    return 0;
  return prime;
}
int main(){
  // int fd;
  // char * buf = "P3\n500 500\n255\n";
  // fd = open("image.ppm", O_CREAT|O_APPEND|O_RDWR|O_EXCL, 0644);
  // write(fd, buf, 15);
  // close(fd);
  FILE * fp;
  fp = fopen("image.ppm", "w");
  fprintf(fp, "P3\n500 500\n255\n");
  int color = 0;
  fp = fopen("image.ppm", "w");
  for(int i = 1; i < 501; i++){
    for(int n = 1; n <501; n++){
      if(prime(n) && prime(i))
        fprintf(fp, "%d %d %d\n ", 255, 255, 255);
        else
        fprintf(fp, "%d %d %d\n ", 0, 0, 0);
    }
  }
  fclose(fp);
  return 0;
}
