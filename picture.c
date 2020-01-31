#include <fcntl.h>

int main(){
  int fd;
  open("image.ppm", O_CREAT|O_APPEND|O_EXCL, 0644);
  
}
