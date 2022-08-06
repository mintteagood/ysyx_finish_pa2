#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <BMP.h>
#include <NDL.h>
#include <BMP.h>

int main() {
  NDL_Init(0);
  int w, h;
  //printf("1\n");
  void *bmp = BMP_Load("/share/pictures/projectn.bmp", &w, &h);
  //printf("w = %d h = %d",w,h);
  assert(bmp);
  //printf("2\n");
  NDL_OpenCanvas(&w, &h);
  //printf("1\n");
  /* for(int i = 0;i < w*h;i++)
  {
    if(((uint32_t*)bmp)[i]&0xff000000) return 0;
    printf("p = %d %x\n",i,((uint32_t*)bmp)[i]);
  } */
  //printf("Finish first\n");
  NDL_DrawRect((uint32_t*)bmp, 0, 0, w, h);
  free(bmp);
  NDL_Quit();
  printf("Test ends! Spinning...\n");
  while (1);
  return 0;
}
