#include<stdio.h>

void main()
{
 long total_pop,total_m,total_w,literate_m,literate_w,total_l,im,iw;
 total_pop=80000;
 total_m=80000*52/100;
 total_w=total_pop-total_m;
 literate_m=total_pop*35/100;
 total_l=total_pop*48/100;
 literate_w=total_l-literate_m;
 im=total_m-literate_m;
 iw=total_w-literate_w;
 printf("Total population = %ld\n",total_pop);
 printf("Total men = %ld\n",total_m);
 printf("Total women = %ld\n",total_w);
 printf("Total literate men = %ld\n",literate_m);
 printf("Total  literate women = %ld\n",literate_w);
 printf("Total illiterate men = %ld\n",im);
 printf("Total illiterate women = %ld\n",iw);
}
