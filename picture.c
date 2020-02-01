#include <fcntl.h>
#include <unistd.h>

int main(){
  int fd;
  char * buf = "P3\n500 500\n255\n";
  fd = open("image.ppm", O_CREAT|O_APPEND|O_RDWR|O_EXCL, 0644);
  write(fd, buf, 15);
  for(int i = 0; i < 500; i++){
    for(int n = 0; n < 500; n++){

    }
  }
  close(fd);
  return 0;
}
