#include<stdio.h>
#define Sol_Num 3

typedef struct {
    char Wname[20];
    int bullet;
    float atk;
}Weapon;

typedef struct {
    char name[20];
    int hp;
    Weapon wpn;
}    Soldier;

void SetInfo(Soldier* s, char* fikename);
void Display(Soldier* s);
main()
{
    Soldier sols[Sol_Num];//sols[0],sols[1],solos[2]
    SetInfo(sols, "file04.txt");
    Display(sols);
}

void SetInfo(Soldiers, char filename) {
    FILE* fp;
    int i;
    if (fp = fopen(filename, "r")) {
        for (i = 0; i < Sol_Num; i++)
        {
            fscanf(fp, "%s%d%s%d%f", (s + i)->name, &(s + i)->hp,
                (s + i)->wpn.Wname, &(s + i)->wpn.bullet, &(s + i)->wpn.atk);
        }
        fclose(fp);
    }
    else
    {
        printf("�ǂݍ��݃G���[\n");
    }
}
void Display(Soldier* s) {
    int i;
    for (i = 0; i < Sol_Num; i++)
    {
        printf("%s\t�̗�:%d\n", (s + i)->name, (s + i)->hp);
        printf("����:%s\t�e��:%d\t�U����:%.2f\n", (s + i)->wpn.Wname, (s + i)->wpn.bullet, (s + i)->wpn.atk);
    }

}