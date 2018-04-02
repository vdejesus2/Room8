//Victor De Jesus
//3-19-18
//CSC 251

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>

void main(void)
{
int x,y,z,i,h,g,k,choice=0;
char name[256];
int boxNum=0;

puts("you open the door and find yourself in a dungeon with five doors");
                                                        puts("one of the five doors is the safe passage to next level and the other four is a trap");
                                                        puts("Which door you pick and choose wisely(#1-5):");
                                                        scanf("%d",&choice);
                                        switch(choice)
                                        {
                                               case 1:
                                                puts("NO! IT'S A TRAP! you enter in a courtyard occupied by an army of knights point their swords at you and arrest you for trespassing as you open the door! GAME OVER!");
                                                break;
                                               case 2:
                                                puts("OH NO! The door you open leads you into a pit of spikes! You loss your footing and fell into the pit! GAME OVER!");
                                                break;
                                               case 3:
                                                puts("Holy Crap! The door leads you into a room with a fire breathing dragon appear in front of you and the door shuts tight. You tried open but it's no use as the dragon unleashed his fire breath. GAME OVER!");
                                                break;
                                               case 4:
                                                puts("Well done, the door you enter leads you to the road to your next challenge and your jouney continues");
                                                break;
                                               case 5:
                                                puts("AH!!!! The door you open released a prisoner and trapped you into his cell as a scapegoat so the prisoner can escape. You are unable to break the door and trapped in the room forever! GAME OVER.");
                                                break;
                                               default:
                                                puts("Error!!! You entered an invalid number type any number between 1 and 5!");
                                                break;
                                        }

}
