#include<stdio.h>

int main(void)
{
int which;
int i,j;
int gen,nen,zan;
int syo=0,gou=0,sum=0;

printf("級数法なら【1】を、定額法なら【0】押してください");
scanf("%d",&which);

if(which){
 printf("級数法にて、年々の償却費と累積償却費を算出します\n");
 printf("取得原価(円)："); scanf("%d",&gen);
 printf("耐用年数(年)："); scanf("%d",&nen);
 printf("残存価格率(％)："); scanf("%d",&zan);

 for(i=1;i<=nen;i++){
 gou+=i;
 }
 printf("%d\n",gou);


 printf(" 年度｜　　      償却費　　　    累積償却費\n");

 for(i=1,j=nen;i<=nen,j>0;i++,j--){
 syo=(gen-gen*0.01*zan)*j/gou;
 sum+=syo;
 printf("%d年目｜　　　　%d円　　　　　%d円\n",i,syo,sum);
 }
}

else{
 printf("定額法にて、年々の償却費と累積償却費を算出します\n");
 printf("取得原価(円)："); scanf("%d",&gen);
 printf("耐用年数(年)："); scanf("%d",&nen);
 printf("残存価格率(％)："); scanf("%d",&zan);



 printf(" 年度｜　　      償却費　　　    累積償却費\n");

 syo=(gen-gen*0.01*zan)/nen;

 for(i=1;i<=nen;i++){
 sum+=syo;
 printf("%d年目｜　　　　%d円　　　　　%d円\n",i,syo,sum);
 }
}
return(0);
}

