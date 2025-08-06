#include<stdio.h>
float converttocelcius(float fahren){
    float celcius;
celcius=(fahren-32)*5/9;
return celcius;
}

int main(){
float f,c;
scanf("%f",&f);10
c=converttocelcius(f);
printf("the celcius value is%.2f",c);
return 0;
}
