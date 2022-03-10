#include <stdio.h>

int main(void)
{
    int v[8]={1,4,5,7,2,9,5,4};
    int i,shuma=0,prodhimi=1;
    
    for(i=0;i<8;i++)
{
    if(i%2==0)
    {
        shuma +=v[i];
    }
    else
    {
        prodhimi *= v[i];
    }
}
printf("\n Shuma eshte %d\n",shuma);
printf("Prodhimi esht %d\n",prodhimi);

if(shuma>prodhimi)
{
    printf("Shuma eshte ne e madhe");
}
else if(shuma<prodhimi)
{
    printf("Shuma eshte me e vogel");
}

else 
{
    printf("Shuma dhe prodhimi jan te barabarta");
}
}
