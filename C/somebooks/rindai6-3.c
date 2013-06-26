#include <stdio.h>

int main(void)
{

  int i;
  int acquisitionCost; /* 取得原価 */
  int durableYears; /* 耐用年数 */
  int residualValue; /* 残存価格 */
  int residualPercent; /* 取得原価に対する残存価格の割合 */
  int payOffAmount; /* 償却費 */
  int totalOfPayOffAmount = 0; /* 累積償却費 */
  int denominator = 0; /* 分母 */
  int flag = 0;
  int flag2 = 0;

  printf("【減価償却シミュレータ】\n");

  /*減価償却の手法を選択させる */
  do {
    printf("減価償却の方法を選択して下さい【級数法…1、定額法…2】：");
    scanf("%d", &flag);
    
    if (flag != 1 && flag != 2) {
      printf("1か2を入力して下さい\n");
    }
  } while(flag != 1 && flag != 2);

  /* 減価償却の条件を設定させる */
  do {
    printf("\n");
    printf("続いて条件の設定を行います。\n");
    printf("取得原価(円)："); scanf("%d", &acquisitionCost);
    printf("耐用年数(年)："); scanf("%d", &durableYears);
    printf("残存価格(取得原価に対する割合[%%])："); scanf("%d", &residualPercent);
    residualValue = (int)(acquisitionCost * (residualPercent / 100.0));
    printf("\n");

    printf("設定した条件の確認を行います。\n");
    printf("**********************************************************\n");
    printf("取得原価：%d円\n", acquisitionCost);
    printf("耐用年数：%d年\n", durableYears);
    printf("残存価格(取得原価に対する割合[%%])：%d円(%d%%)\n", residualValue, residualPercent);
    printf("**********************************************************\n");
    do {
      printf("以上の条件で良いですか？【変更…1、シミュレーション開始…0】："); scanf("%d", &flag2);
      if (flag2 != 0 && flag2 != 1) {
	printf("0か1を入力して下さい\n");
      }
    } while (flag2 != 0 && flag2 != 1);
  } while (flag2 == 1);

  printf("\nシミュレーションを開始します。\n");

  /* 減価償却の処理 */
  if (flag == 1) {  /* 級数法の場合 */
    for (i = 1; i <= durableYears; i++) {
      denominator += i;   /* 分母の級数を求める */
    }
    for (i = 1; i <= durableYears; i++) {
      printf("******************************\n");
      printf("【%d年目】%.2f%%償却\n", i, ((double)(durableYears-i+1)/(double)denominator)*100);
      payOffAmount = (int)((acquisitionCost - residualValue) * ((double)(durableYears-i+1) / (double)denominator)); /* 償却費の決定 */
      totalOfPayOffAmount += payOffAmount; /* 累積償却費の決定 */
      printf("償却費：%d\n", payOffAmount);
      printf("累積償却費：%d\n", totalOfPayOffAmount);
    }
  }
  else {   /* 定額法の場合 */
    payOffAmount = (int)((acquisitionCost - residualValue) * ((double)1 / (double)durableYears)); /* 償却費を決める */

    for (i = 1; i <= durableYears; i++) {
      printf("******************************\n");
      printf("【%d年目】\n", i);
      totalOfPayOffAmount += payOffAmount;
      printf("償却費：%d\n", payOffAmount);
      printf("累積償却費：%d\n", totalOfPayOffAmount);
    }
  }

  return (0);
}

