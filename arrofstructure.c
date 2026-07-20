#include <stdio.h>
#include <string.h>

typedef struct pokemon {
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
} pokemon;

int main() {

    pokemon arr[3];

    // Pokemon 1
    arr[0].attack = 50;
    arr[0].hp = 100;
    arr[0].speed = 30;
    arr[0].tier = 'A';
    strcpy(arr[0].name, "charizard");

    // Pokemon 2
    arr[1].attack = 150;
    arr[1].hp = 100;
    arr[1].speed = 130;
    arr[1].tier = 'S';
    strcpy(arr[1].name, "mewtwo");

    // Pokemon 3
    arr[2].attack = 90;
    arr[2].hp = 120;
    arr[2].speed = 80;
    arr[2].tier = 'B';
    strcpy(arr[2].name, "pikachu");

    // Print all Pokemon details
    for (int i = 0; i < 3; i++) {
        printf("Pokemon %d\n", i + 1);
        printf("Name   : %s\n", arr[i].name);
        printf("HP     : %d\n", arr[i].hp);
        printf("Attack : %d\n", arr[i].attack);
        printf("Speed  : %d\n", arr[i].speed);
        printf("Tier   : %c\n\n", arr[i].tier);
    }

    return 0;
}