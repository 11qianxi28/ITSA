#include <stdio.h>

int main()
{
    int month, date;
    
    scanf("%d %d", &month, &date);
    
    switch(month)
    {
        case 1:
            if(date < 21)
                printf("Capricorn\n"); //12/22~1/20 摩羯
            else
                printf("Aquarius\n"); //1/21~2/18 水瓶
            break;
            
        case 2:
            if(date < 19)
                printf("Aquarius\n"); //1/21~2/18 水瓶
            else
                printf("Pisces\n"); //2/19~3/20 雙魚
            break;
            
        case 3:
            if(date < 21)
                printf("Pisces\n"); //2/19~3/20 雙魚
            else
                printf("Aries\n"); //3/21~4/20 牡羊
            break;
            
        case 4:
            if(date < 21)
                printf("Aries\n"); //3/21~4/20 牡羊
            else
                printf("Taurus\n"); //4/21~5/21 金牛
            break;
            
        case 5:
            if(date < 22)
                printf("Taurus\n"); //4/21~5/21 金牛
            else
                printf("Gemini\n"); //5/22~6/21 雙子
            break;
            
        case 6:
            if(date < 22)
                printf("Gemini\n"); //5/22~6/21 雙子
            else
                printf("Cancer\n"); //6/22~7/22 巨蟹
            break;
            
        case 7:
            if(date < 23)
                printf("Cancer\n"); //6/22~7/22 巨蟹
            else
                printf("Leo\n"); //7/23~8/23 獅子
            break;
            
        case 8:
            if(date < 24)
                printf("Leo\n"); //7/23~8/23 獅子
            else
                printf("Virgo\n"); //8/24~9/23 處女
            break;
            
        case 9:
            if(date < 24)
                printf("Virgo\n"); //8/24~9/23 處女
            else
                printf("Libra\n"); //9/24~10/23 天秤
            break;
            
        case 10:
            if(date < 24)
                printf("Libra\n"); //9/24~10/23 天秤
            else
                printf("Scorpio\n"); //10/24~11/22 天蠍
            break;
            
        case 11:
            if(date < 23)
                printf("Scorpio\n"); //10/24~11/22 天蠍
            else
                printf("Sagittarius\n"); //11/23~12/21 射手
            break;
            
        case 12:
            if(date < 22)
                printf("Sagittarius\n"); //11/23~12/21 射手
            else
                printf("Capricorn\n"); //12/22~1/20 摩羯
            break;
    }
    
    return 0;
}
