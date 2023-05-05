// BERKAN ACIKGOZ
// 02180201072
// 3. Sinif

#include <stdbool.h> // Gerekli kutuphaneler
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

uint8_t AX, BX, CX, DX, basamak1; // 8 bitlik değer ataması uint8_t
uint8_t ram[256]; // 8 bitlik ram dizisi
int isaret, basamakcheck; // basamak kontrolu ve indexi tutan degerler

int HRK(char array[]) { // HRK (Deger atamasi) icin gerekli fonksiyon
   isaret += 4;
   if (array[isaret] == 'A' && array[isaret + 1] == 'X' && array[isaret + 2] == ',') {
      if (array[isaret + 3] == 'B') {
         isaret += 5;
         AX = BX;
      } else if (array[isaret + 3] == 'C') {
         isaret += 5;
         AX = CX;
      } else if (array[isaret + 3] == 'D') {
         isaret += 5;
         AX = DX;
      } else if (array[isaret + 3] == '[') {
         isaret += 4;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else {
            basamak1 = (array[isaret - 1] - 48);
            isaret++;
         }
         AX = ram[basamak1];
         basamakcheck = 0;
      } else {
         isaret += 3;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else {
            basamak1 = (array[isaret - 1] - 48);
         }
         AX = basamak1;
         basamakcheck = 0;
      }
   } else if (array[isaret] == 'B' && array[isaret + 1] == 'X' && array[isaret + 2] == ',') {
      if (array[isaret + 3] == 'A') {
         isaret += 5;
         BX = AX;
      } else if (array[isaret + 3] == 'C') {
         isaret += 5;
         BX = CX;
      } else if (array[isaret + 3] == 'D') {
         isaret += 5;
         BX = DX;
      } else if (array[isaret + 3] == '[') {
         isaret += 4;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else {
            basamak1 = (array[isaret - 1] - 48);
            isaret++;
         }
         BX = ram[basamak1];
         basamakcheck = 0;
      } else {
         isaret += 3;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else {
            basamak1 = (array[isaret - 1] - 48);
         }
         BX = basamak1;
         basamakcheck = 0;
      }
   } else if (array[isaret] == 'C' && array[isaret + 1] == 'X' && array[isaret + 2] == ',') {
      if (array[isaret + 3] == 'B') {
         isaret += 5;
         CX = BX;
      } else if (array[isaret + 3] == 'A') {
         isaret += 5;
         CX = AX;
      } else if (array[isaret + 3] == 'D') {
         isaret += 5;
         CX = DX;
      } else if (array[isaret + 3] == '[') {
         isaret += 4;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else {
            basamak1 = (array[isaret - 1] - 48);
            isaret++;
         }
         CX = ram[basamak1];
         basamakcheck = 0;
      } else {
         isaret += 3;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else {
            basamak1 = (array[isaret - 1] - 48);
         }
         CX = basamak1;
         basamakcheck = 0;
      }
   } else if (array[isaret] == 'D' && array[isaret + 1] == 'X' && array[isaret + 2] == ',') {
      if (array[isaret + 3] == 'B') {
         isaret += 5;
         DX = BX;
      } else if (array[isaret + 3] == 'C') {
         isaret += 5;
         DX = CX;
      } else if (array[isaret + 3] == 'A') {
         isaret += 5;
         DX = AX;
         basamakcheck = 0;
      } else if (array[isaret + 3] == '[') {
         isaret += 4;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else {
            basamak1 = (array[isaret - 1] - 48);
            isaret++;
         }
         DX = ram[basamak1];
         basamakcheck = 0;
      } else {
         isaret += 3;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else {
            basamak1 = (array[isaret - 1] - 48);
         }
         DX = basamak1;
         basamakcheck = 0;
      }
   } else if (array[isaret] == '[') {
      isaret++;
      while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
         array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
         array[isaret] == '8' || array[isaret] == '9') {
         basamakcheck++;
         isaret++;
      }
      if (basamakcheck == 3) {
         basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         isaret += 2;
      } else if (basamakcheck == 2) {
         basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         isaret += 2;
      } else {
         basamak1 = (array[isaret - 1] - 48);
         isaret += 2;
      }
      basamakcheck=0;
      if (array[isaret] == 'A' && array[isaret + 1] == 'X') {
         ram[basamak1]=AX;
         isaret += 2;
      } else if (array[isaret] == 'B' && array[isaret + 1] == 'X') {
         ram[basamak1]=BX;
         isaret += 2;
      } else if (array[isaret] == 'C' && array[isaret + 1] == 'X') {
         ram[basamak1]=CX;
         isaret += 2;
      } else if (array[isaret] == 'D' && array[isaret + 1] == 'X') {
         ram[basamak1]=DX;
         isaret += 2;
      }
	   basamakcheck=0;
   }
}
int TOP(char array[]) { // Toplama islemi icin fonksiyon
   isaret += 4;
   if (array[isaret] == 'A' && array[isaret + 1] == 'X' && array[isaret + 2] == ',') {
      if (array[isaret + 3] == 'B') {
         isaret += 5;
         AX += BX;
      } else if (array[isaret + 3] == 'C') {
         isaret += 5;
         AX += CX;
      } else if (array[isaret + 3] == 'D') {
         isaret += 5;
         AX += DX;
      } else if (array[isaret + 3] == 'A') {
         isaret += 5;
         AX += AX;
      } else if (array[isaret + 3] == '[') {
         isaret += 4;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else {
            basamak1 = (array[isaret - 1] - 48);
            isaret++;
         }
         AX += ram[basamak1];
         basamakcheck = 0;
      } else {
         isaret += 3;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else {
            basamak1 = (array[isaret - 1] - 48);
         }
         AX += basamak1;
         basamakcheck = 0;
      }
   } else if (array[isaret] == 'B' && array[isaret + 1] == 'X' && array[isaret + 2] == ',') {
      if (array[isaret + 3] == 'A') {
         isaret += 5;
         BX += AX;
      } else if (array[isaret + 3] == 'C') {
         isaret += 5;
         BX += CX;
      } else if (array[isaret + 3] == 'D') {
         isaret += 5;
         BX += DX;
      } else if (array[isaret + 3] == 'B') {
         isaret += 5;
         BX += BX;
      } else if (array[isaret + 3] == '[') {
         isaret += 4;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else {
            basamak1 = (array[isaret - 1] - 48);
            isaret++;
         }
         BX += ram[basamak1];
         basamakcheck = 0;
      } else {
         isaret += 3;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else {
            basamak1 = (array[isaret - 1] - 48);
         }
         BX += basamak1;
         basamakcheck = 0;
      }
   } else if (array[isaret] == 'C' && array[isaret + 1] == 'X' && array[isaret + 2] == ',') {
      if (array[isaret + 3] == 'B') {
         isaret += 5;
         CX += BX;
      } else if (array[isaret + 3] == 'A') {
         isaret += 5;
         CX += AX;
      } else if (array[isaret + 3] == 'D') {
         isaret += 5;
         CX += DX;
      } else if (array[isaret + 3] == 'C') {
         isaret += 5;
         CX += CX;
      } else if (array[isaret + 3] == '[') {
         isaret += 4;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else {
            basamak1 = (array[isaret - 1] - 48);
            isaret++;
         }
         CX += ram[basamak1];
         basamakcheck = 0;
      } else {
         isaret += 3;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else {
            basamak1 = (array[isaret - 1] - 48);
         }
         CX += basamak1;
         basamakcheck = 0;
      }
   } else if (array[isaret] == 'D' && array[isaret + 1] == 'X' && array[isaret + 2] == ',') {
      if (array[isaret + 3] == 'B') {
         isaret += 5;
         DX += BX;
      } else if (array[isaret + 3] == 'C') {
         isaret += 5;
         DX += CX;
      } else if (array[isaret + 3] == 'A') {
         isaret += 5;
         DX += AX;
         basamakcheck = 0;
      } else if (array[isaret + 3] == 'D') {
         isaret += 5;
         DX += DX;
      } else if (array[isaret + 3] == '[') {
         isaret += 4;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else {
            basamak1 = (array[isaret - 1] - 48);
            isaret++;
         }
         DX += ram[basamak1];
         basamakcheck = 0;
      } else {
         isaret += 3;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else {
            basamak1 = (array[isaret - 1] - 48);
         }
         DX += basamak1;
         basamakcheck = 0;
      }
   } else if (array[isaret] == '[') {
      isaret++;
      while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
         array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
         array[isaret] == '8' || array[isaret] == '9') {
         basamakcheck++;
         isaret++;
      }
      if (basamakcheck == 3) {
         basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         isaret += 2;
      } else if (basamakcheck == 2) {
         basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         isaret += 2;
      } else {
         basamak1 = (array[isaret - 1] - 48);
         isaret += 2;
      }
      if (array[isaret] == 'A' && array[isaret + 1] == 'X') {
         ram[basamak1]+= AX;
         isaret += 2;
      } else if (array[isaret] == 'B' && array[isaret + 1] == 'X') {
         ram[basamak1]+= BX;
         isaret += 2;
      } else if (array[isaret] == 'C' && array[isaret + 1] == 'X') {
         ram[basamak1]+= CX;
         isaret += 2;
      } else if (array[isaret] == 'D' && array[isaret + 1] == 'X') {
         ram[basamak1]+= DX;
         isaret += 2;
      }
	   basamakcheck=0; 
   }
}
int CIK(char array[]) { // Cikarma islemi icin fonksiyon
   isaret += 4;
   if (array[isaret] == 'A' && array[isaret + 1] == 'X' && array[isaret + 2] == ',') {
      if (array[isaret + 3] == 'B') {
         isaret += 5;
         AX -= BX;
      } else if (array[isaret + 3] == 'C') {
         isaret += 5;
         AX -= CX;
      } else if (array[isaret + 3] == 'D') {
         isaret += 5;
         AX -= DX;
      } else if (array[isaret + 3] == 'A') {
         isaret += 5;
         AX -= AX;
      } else if (array[isaret + 3] == '[') {
         isaret += 4;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else {
            basamak1 = (array[isaret - 1] - 48);
            isaret++;
         }
         AX -= ram[basamak1];
         basamakcheck = 0;
      } else {
         isaret += 3;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else {
            basamak1 = (array[isaret - 1] - 48);
         }
         AX -= basamak1;
         basamakcheck = 0;
      }
   } else if (array[isaret] == 'B' && array[isaret + 1] == 'X' && array[isaret + 2] == ',') {
      if (array[isaret + 3] == 'A') {
         isaret += 5;
         BX -= AX;
      } else if (array[isaret + 3] == 'C') {
         isaret += 5;
         BX -= CX;
      } else if (array[isaret + 3] == 'D') {
         isaret += 5;
         BX -= DX;
      } else if (array[isaret + 3] == 'B') {
         isaret += 5;
         BX -= BX;
      } else if (array[isaret + 3] == '[') {
         isaret += 4;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else {
            basamak1 = (array[isaret - 1] - 48);
            isaret++;
         }
         BX -= ram[basamak1];
         basamakcheck = 0;
      } else {
         isaret += 3;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else {
            basamak1 = (array[isaret - 1] - 48);
         }
         BX -= basamak1;
         basamakcheck = 0;
      }
   } else if (array[isaret] == 'C' && array[isaret + 1] == 'X' && array[isaret + 2] == ',') {
      if (array[isaret + 3] == 'B') {
         isaret += 5;
         CX -= BX;
      } else if (array[isaret + 3] == 'A') {
         isaret += 5;
         CX -= AX;
      } else if (array[isaret + 3] == 'D') {
         isaret += 5;
         CX -= DX;
      } else if (array[isaret + 3] == 'C') {
         isaret += 5;
         CX -= CX;
      } else if (array[isaret + 3] == '[') {
         isaret += 4;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else {
            basamak1 = (array[isaret - 1] - 48);
            isaret++;
         }
         CX -= ram[basamak1];
         basamakcheck = 0;
      } else {
         isaret += 3;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else {
            basamak1 = (array[isaret - 1] - 48);
         }
         CX -= basamak1;
         basamakcheck = 0;
      }
   } else if (array[isaret] == 'D' && array[isaret + 1] == 'X' && array[isaret + 2] == ',') {
      if (array[isaret + 3] == 'B') {
         isaret += 5;
         DX -= BX;
      } else if (array[isaret + 3] == 'C') {
         isaret += 5;
         DX -= CX;
      } else if (array[isaret + 3] == 'A') {
         isaret += 5;
         DX -= AX;
         basamakcheck = 0;
      } else if (array[isaret + 3] == 'D') {
         isaret += 5;
         DX -= DX;
      } else if (array[isaret + 3] == '[') {
         isaret += 4;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else {
            basamak1 = (array[isaret - 1] - 48);
            isaret++;
         }
         DX -= ram[basamak1];
         basamakcheck = 0;
      } else {
         isaret += 3;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else {
            basamak1 = (array[isaret - 1] - 48);
         }
         DX -= basamak1;
         basamakcheck = 0;
      }
   } else if (array[isaret] == '[') {
      isaret++;
      while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
         array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
         array[isaret] == '8' || array[isaret] == '9') {
         basamakcheck++;
         isaret++;
      }
      if (basamakcheck == 3) {
         basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         isaret += 2;
      } else if (basamakcheck == 2) {
         basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         isaret += 2;
      } else {
         basamak1 = (array[isaret - 1] - 48);
         isaret += 2;
      }
      if (array[isaret] == 'A' && array[isaret + 1] == 'X') {
         ram[basamak1]-= AX;
         isaret += 2;
      } else if (array[isaret] == 'B' && array[isaret + 1] == 'X') {
         ram[basamak1]-= BX;
         isaret += 2;
      } else if (array[isaret] == 'C' && array[isaret + 1] == 'X') {
         ram[basamak1]-= CX;
         isaret += 2;
      } else if (array[isaret] == 'D' && array[isaret + 1] == 'X') {
         ram[basamak1]-= DX;
         isaret += 2;
      }
	   basamakcheck=0;
   }
}
int CRP(char array[]) { // Carpma islemi icin fonksiyon
   isaret += 4;
   if (array[isaret] == 'A' && array[isaret + 1] == 'X' && array[isaret + 2] == ',') {
      if (array[isaret + 3] == 'B') {
         isaret += 5;
         AX *= BX;
      } else if (array[isaret + 3] == 'C') {
         isaret += 5;
         AX *= CX;
      } else if (array[isaret + 3] == 'D') {
         isaret += 5;
         AX *= DX;
      } else if (array[isaret + 3] == 'A') {
         isaret += 5;
         AX *= AX;
      } else if (array[isaret + 3] == '[') {
         isaret += 4;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else {
            basamak1 = (array[isaret - 1] - 48);
            isaret++;
         }
         AX *= ram[basamak1];
         basamakcheck = 0;
      } else {
         isaret += 3;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else {
            basamak1 = (array[isaret - 1] - 48);
         }
         AX *= basamak1;
         basamakcheck = 0;
      }
   } else if (array[isaret] == 'B' && array[isaret + 1] == 'X' && array[isaret + 2] == ',') {
      if (array[isaret + 3] == 'A') {
         isaret += 5;
         BX *= AX;
      } else if (array[isaret + 3] == 'C') {
         isaret += 5;
         BX *= CX;
      } else if (array[isaret + 3] == 'D') {
         isaret += 5;
         BX *= DX;
      } else if (array[isaret + 3] == 'B') {
         isaret += 5;
         BX *= BX;
      } else if (array[isaret + 3] == '[') {
         isaret += 4;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else {
            basamak1 = (array[isaret - 1] - 48);
            isaret++;
         }
         BX *= ram[basamak1];
         basamakcheck = 0;
      } else {
         isaret += 3;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else {
            basamak1 = (array[isaret - 1] - 48);
         }
         BX *= basamak1;
         basamakcheck = 0;
      }
   } else if (array[isaret] == 'C' && array[isaret + 1] == 'X' && array[isaret + 2] == ',') {
      if (array[isaret + 3] == 'B') {
         isaret += 5;
         CX *= BX;
      } else if (array[isaret + 3] == 'A') {
         isaret += 5;
         CX *= AX;
      } else if (array[isaret + 3] == 'D') {
         isaret += 5;
         CX *= DX;
      } else if (array[isaret + 3] == 'C') {
         isaret += 5;
         CX *= CX;
      } else if (array[isaret + 3] == '[') {
         isaret += 4;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else {
            basamak1 = (array[isaret - 1] - 48);
            isaret++;
         }
         CX *= ram[basamak1];
         basamakcheck = 0;
      } else {
         isaret += 3;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else {
            basamak1 = (array[isaret - 1] - 48);
         }
         CX *= basamak1;
         basamakcheck = 0;
      }
   } else if (array[isaret] == 'D' && array[isaret + 1] == 'X' && array[isaret + 2] == ',') {
      if (array[isaret + 3] == 'B') {
         isaret += 5;
         DX *= BX;
      } else if (array[isaret + 3] == 'C') {
         isaret += 5;
         DX *= CX;
      } else if (array[isaret + 3] == 'A') {
         isaret += 5;
         DX *= AX;
         basamakcheck = 0;
      } else if (array[isaret + 3] == 'D') {
         isaret += 5;
         DX *= DX;
      } else if (array[isaret + 3] == '[') {
         isaret += 4;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else {
            basamak1 = (array[isaret - 1] - 48);
            isaret++;
         }
         DX *= ram[basamak1];
         basamakcheck = 0;
      } else {
         isaret += 3;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else {
            basamak1 = (array[isaret - 1] - 48);
         }
         DX *= basamak1;
         basamakcheck = 0;
      }
   } else if (array[isaret] == '[') {
      isaret++;
      while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
         array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
         array[isaret] == '8' || array[isaret] == '9') {
         basamakcheck++;
         isaret++;
      }
      if (basamakcheck == 3) {
         basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         isaret += 2;
      } else if (basamakcheck == 2) {
         basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         isaret += 2;
      } else {
         basamak1 = (array[isaret - 1] - 48);
         isaret += 2;
      }
      if (array[isaret] == 'A' && array[isaret + 1] == 'X') {
         ram[basamak1] *=AX ;
         isaret += 2;
      } else if (array[isaret] == 'B' && array[isaret + 1] == 'X') {
         ram[basamak1] *=BX ;
         isaret += 2;
      } else if (array[isaret] == 'C' && array[isaret + 1] == 'X') {
         ram[basamak1] *=CX ;
         isaret += 2;
      } else if (array[isaret] == 'D' && array[isaret + 1] == 'X') {
        ram[basamak1] *=DX ;
         isaret += 2;
      }
	   basamakcheck=0;
   }
}
int VE(char array[]) { // VE Sorgusu icin fonksiyon
   isaret += 3;
   if (array[isaret] == 'A' && array[isaret + 1] == 'X' && array[isaret + 2] == ',') {
      if (array[isaret + 3] == 'B') {
         isaret += 5;
         AX &= BX;
      } else if (array[isaret + 3] == 'C') {
         isaret += 5;
         AX &= CX;
      } else if (array[isaret + 3] == 'D') {
         isaret += 5;
         AX &= DX;
      } else if (array[isaret + 3] == 'A') {
         isaret += 5;
         AX &= AX;
      } else if (array[isaret + 3] == '[') {
         isaret += 4;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else {
            basamak1 = (array[isaret - 1] - 48);
            isaret++;
         }
         AX &= ram[basamak1];
         basamakcheck = 0;
      } else {
         isaret += 3;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else {
            basamak1 = (array[isaret - 1] - 48);
         }
         AX &= basamak1;
         basamakcheck = 0;
      }
   } else if (array[isaret] == 'B' && array[isaret + 1] == 'X' && array[isaret + 2] == ',') {
      if (array[isaret + 3] == 'A') {
         isaret += 5;
         BX &= AX;
      } else if (array[isaret + 3] == 'C') {
         isaret += 5;
         BX &= CX;
      } else if (array[isaret + 3] == 'D') {
         isaret += 5;
         BX &= DX;
      } else if (array[isaret + 3] == 'B') {
         isaret += 5;
         BX &= BX;
      } else if (array[isaret + 3] == '[') {
         isaret += 4;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else {
            basamak1 = (array[isaret - 1] - 48);
            isaret++;
         }
         BX &= ram[basamak1];
         basamakcheck = 0;
      } else {
         isaret += 3;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else {
            basamak1 = (array[isaret - 1] - 48);
         }
         BX &= basamak1;
         basamakcheck = 0;
      }
   } else if (array[isaret] == 'C' && array[isaret + 1] == 'X' && array[isaret + 2] == ',') {
      if (array[isaret + 3] == 'B') {
         isaret += 5;
         CX &= BX;
      } else if (array[isaret + 3] == 'A') {
         isaret += 5;
         CX &= AX;
      } else if (array[isaret + 3] == 'D') {
         isaret += 5;
         CX &= DX;
      } else if (array[isaret + 3] == 'C') {
         isaret += 5;
         CX &= CX;
      } else if (array[isaret + 3] == '[') {
         isaret += 4;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else {
            basamak1 = (array[isaret - 1] - 48);
            isaret++;
         }
         CX &= ram[basamak1];
         basamakcheck = 0;
      } else {
         isaret += 3;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else {
            basamak1 = (array[isaret - 1] - 48);
         }
         CX &= basamak1;
         basamakcheck = 0;
      }
   } else if (array[isaret] == 'D' && array[isaret + 1] == 'X' && array[isaret + 2] == ',') {
      if (array[isaret + 3] == 'B') {
         isaret += 5;
         DX &= BX;
      } else if (array[isaret + 3] == 'C') {
         isaret += 5;
         DX &= CX;
      } else if (array[isaret + 3] == 'A') {
         isaret += 5;
         DX &= AX;
         basamakcheck = 0;
      } else if (array[isaret + 3] == 'D') {
         isaret += 5;
         DX &= DX;
      } else if (array[isaret + 3] == '[') {
         isaret += 4;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else {
            basamak1 = (array[isaret - 1] - 48);
            isaret++;
         }
         DX &= ram[basamak1];
         basamakcheck = 0;
      } else {
         isaret += 3;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else {
            basamak1 = (array[isaret - 1] - 48);
         }
         DX &= basamak1;
         basamakcheck = 0;
      }
   } else if (array[isaret] == '[') {
      isaret++;
      while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
         array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
         array[isaret] == '8' || array[isaret] == '9') {
         basamakcheck++;
         isaret++;
      }
      if (basamakcheck == 3) {
         basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         isaret += 2;
      } else if (basamakcheck == 2) {
         basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         isaret += 2;
      } else {
         basamak1 = (array[isaret - 1] - 48);
         isaret += 2;
      }
      if (array[isaret] == 'A' && array[isaret + 1] == 'X') {
         ram[basamak1] &=AX ;
         isaret += 2;
      } else if (array[isaret] == 'B' && array[isaret + 1] == 'X') {
         ram[basamak1] &=BX ;
         isaret += 2;
      } else if (array[isaret] == 'C' && array[isaret + 1] == 'X') {
         ram[basamak1] &=CX ;
         isaret += 2;
      } else if (array[isaret] == 'D' && array[isaret + 1] == 'X') {
         ram[basamak1] &=DX ;
         isaret += 2;
      }
	   basamakcheck=0;
   }
}
int VEYA(char array[]) { // VEYA Sorgusu icin Fonksiyon
   isaret += 5;
   if (array[isaret] == 'A' && array[isaret + 1] == 'X' && array[isaret + 2] == ',') {
      if (array[isaret + 3] == 'B') {
         isaret += 5;
         AX |= BX;
      } else if (array[isaret + 3] == 'C') {
         isaret += 5;
         AX |= CX;
      } else if (array[isaret + 3] == 'D') {
         isaret += 5;
         AX |= DX;
      } else if (array[isaret + 3] == 'A') {
         isaret += 5;
         AX |= AX;
      } else if (array[isaret + 3] == '[') {
         isaret += 4;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else {
            basamak1 = (array[isaret - 1] - 48);
            isaret++;
         }
         AX |= ram[basamak1];
         basamakcheck = 0;
      } else {
         isaret += 3;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else {
            basamak1 = (array[isaret - 1] - 48);
         }
         AX |= basamak1;
         basamakcheck = 0;
      }
   } else if (array[isaret] == 'B' && array[isaret + 1] == 'X' && array[isaret + 2] == ',') {
      if (array[isaret + 3] == 'A') {
         isaret += 5;
         BX |= AX;
      } else if (array[isaret + 3] == 'C') {
         isaret += 5;
         BX |= CX;
      } else if (array[isaret + 3] == 'D') {
         isaret += 5;
         BX |= DX;
      } else if (array[isaret + 3] == 'B') {
         isaret += 5;
         BX |= BX;
      } else if (array[isaret + 3] == '[') {
         isaret += 4;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else {
            basamak1 = (array[isaret - 1] - 48);
            isaret++;
         }
         BX |= ram[basamak1];
         basamakcheck = 0;
      } else {
         isaret += 3;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else {
            basamak1 = (array[isaret - 1] - 48);
         }
         BX |= basamak1;
         basamakcheck = 0;
      }
   } else if (array[isaret] == 'C' && array[isaret + 1] == 'X' && array[isaret + 2] == ',') {
      if (array[isaret + 3] == 'B') {
         isaret += 5;
         CX |= BX;
      } else if (array[isaret + 3] == 'A') {
         isaret += 5;
         CX |= AX;
      } else if (array[isaret + 3] == 'D') {
         isaret += 5;
         CX |= DX;
      } else if (array[isaret + 3] == 'C') {
         isaret += 5;
         CX |= CX;
      } else if (array[isaret + 3] == '[') {
         isaret += 4;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else {
            basamak1 = (array[isaret - 1] - 48);
            isaret++;
         }
         CX |= ram[basamak1];
         basamakcheck = 0;
      } else {
         isaret += 3;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else {
            basamak1 = (array[isaret - 1] - 48);
         }
         CX |= basamak1;
         basamakcheck = 0;
      }
   } else if (array[isaret] == 'D' && array[isaret + 1] == 'X' && array[isaret + 2] == ',') {
      if (array[isaret + 3] == 'B') {
         isaret += 5;
         DX |= BX;
      } else if (array[isaret + 3] == 'C') {
         isaret += 5;
         DX |= CX;
      } else if (array[isaret + 3] == 'A') {
         isaret += 5;
         DX |= AX;
         basamakcheck = 0;
      } else if (array[isaret + 3] == 'D') {
         isaret += 5;
         DX |= DX;
      } else if (array[isaret + 3] == '[') {
         isaret += 4;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else {
            basamak1 = (array[isaret - 1] - 48);
            isaret++;
         }
         DX |= ram[basamak1];
         basamakcheck = 0;
      } else {
         isaret += 3;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else {
            basamak1 = (array[isaret - 1] - 48);
         }
         DX |= basamak1;
         basamakcheck = 0;
      }
   } else if (array[isaret] == '[') {
      isaret++;
      while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
         array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
         array[isaret] == '8' || array[isaret] == '9') {
         basamakcheck++;
         isaret++;
      }
      if (basamakcheck == 3) {
         basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         isaret += 2;
      } else if (basamakcheck == 2) {
         basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         isaret += 2;
      } else {
         basamak1 = (array[isaret - 1] - 48);
         isaret += 2;
      }
      if (array[isaret] == 'A' && array[isaret + 1] == 'X') {
         ram[basamak1] |= AX;
         isaret += 2;
      } else if (array[isaret] == 'B' && array[isaret + 1] == 'X') {
         ram[basamak1] |= BX;
         isaret += 2;
      } else if (array[isaret] == 'C' && array[isaret + 1] == 'X') {
         ram[basamak1] |= CX;
         isaret += 2;
      } else if (array[isaret] == 'D' && array[isaret + 1] == 'X') {
         ram[basamak1] |= DX;
         isaret += 2;
      }
	   basamakcheck=0; 
   }
}
int BOL(char array[]) { // Bolme islemi fonksiyon
   isaret += 4;
   if (array[isaret] == 'A' && array[isaret + 1] == 'X' && array[isaret + 2] == ',') {
      if (array[isaret + 3] == 'B') {
         isaret += 5;
         DX = AX % BX;
         AX /= BX;
      } else if (array[isaret + 3] == 'C') {
         isaret += 5;
         DX = AX % CX;
         AX /= CX;
      } else if (array[isaret + 3] == 'A') {
         isaret += 5;
         DX = AX % AX;
         AX /= AX;
      } else if (array[isaret + 3] == '[') {
         isaret += 4;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else {
            basamak1 = (array[isaret - 1] - 48);
            isaret++;
         }
         DX = AX % ram[basamak1];
         AX /= ram[basamak1];
         basamakcheck = 0;
      } else {
         isaret += 3;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else {
            basamak1 = (array[isaret - 1] - 48);
         }
         DX = AX % basamak1;
         AX /= basamak1;
         basamakcheck = 0;
      }
   } else if (array[isaret] == 'B' && array[isaret + 1] == 'X' && array[isaret + 2] == ',') {
      if (array[isaret + 3] == 'A') {
         isaret += 5;
         DX = BX % AX;
         BX /= AX;
      } else if (array[isaret + 3] == 'C') {
         isaret += 5;
         DX = BX % CX;
         BX /= CX;
      } else if (array[isaret + 3] == 'B') {
         isaret += 5;
         DX = BX % BX;
         BX /= BX;
      } else if (array[isaret + 3] == '[') {
         isaret += 4;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else {
            basamak1 = (array[isaret - 1] - 48);
            isaret++;
         }
         DX = BX % ram[basamak1];
         BX /= ram[basamak1];
         basamakcheck = 0;
      } else {
         isaret += 3;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else {
            basamak1 = (array[isaret - 1] - 48);
         }
         DX = BX % basamak1;
         BX /= basamak1;
         basamakcheck = 0;
      }
   } else if (array[isaret] == 'C' && array[isaret + 1] == 'X' && array[isaret + 2] == ',') {
      if (array[isaret + 3] == 'B') {
         isaret += 5;
         DX = CX % BX;
         CX /= BX;
      } else if (array[isaret + 3] == 'A') {
         isaret += 5;
         DX = CX % AX;
         CX /= AX;
      } else if (array[isaret + 3] == 'C') {
         isaret += 5;
         DX = CX % CX;
         CX /= CX;
      } else if (array[isaret + 3] == '[') {
         isaret += 4;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
            isaret++;
         } else {
            basamak1 = (array[isaret - 1] - 48);
            isaret++;
         }
         DX = CX % ram[basamak1];
         CX /= ram[basamak1];
         basamakcheck = 0;
      } else {
         isaret += 3;
         while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
            array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
            array[isaret] == '8' || array[isaret] == '9') {
            basamakcheck++;
            isaret++;
         }
         if (basamakcheck == 3) {
            basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else if (basamakcheck == 2) {
            basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         } else {
            basamak1 = (array[isaret - 1] - 48);
         }
         DX = CX % basamak1;
         CX /= basamak1;
         basamakcheck = 0;
      }
   } else if (array[isaret] == '[') {
      isaret++;
      while (array[isaret] == '0' || array[isaret] == '1' || array[isaret] == '2' || array[isaret] == '3' ||
         array[isaret] == '4' || array[isaret] == '5' || array[isaret] == '6' || array[isaret] == '7' ||
         array[isaret] == '8' || array[isaret] == '9') {
         basamakcheck++;
         isaret++;
      }
      if (basamakcheck == 3) {
         basamak1 = ((array[isaret - 3] - 48) * 100) + ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         isaret += 2;
      } else if (basamakcheck == 2) {
         basamak1 = ((array[isaret - 2] - 48) * 10) + ((array[isaret - 1] - 48));
         isaret += 2;
      } else {
         basamak1 = (array[isaret - 1] - 48);
         isaret += 2;
      }
      if (array[isaret] == 'A' && array[isaret + 1] == 'X') {
         DX = ram[basamak1]%AX  ;
         ram[basamak1] /= AX;
         isaret += 2;
      } else if (array[isaret] == 'B' && array[isaret + 1] == 'X') {
         DX = ram[basamak1]%BX  ;
         ram[basamak1] /= BX;
         isaret += 2;
      } else if (array[isaret] == 'C' && array[isaret + 1] == 'X') {
         DX = ram[basamak1]%CX  ;
         ram[basamak1] /= CX;
         isaret += 2;
      }
	   basamakcheck=0;
   }
}
int DEG(char array[]) { // DEG Fonksiyonu
   isaret += 4;
   if (array[isaret] == 'A' && array[isaret + 1] == 'X') {
      isaret += 2;
      AX = ~AX;
   } else if (array[isaret] == 'B' && array[isaret + 1] == 'X') {
      isaret += 2;
      BX = ~BX;
   } else if (array[isaret] == 'C' && array[isaret + 1] == 'X') {
      isaret += 2;
      CX = ~CX;
   } else if (array[isaret] == 'D' && array[isaret + 1] == 'X') {
      isaret += 2;
      DX = ~DX;
   }
}
int main() { //Ana class
   int iram;
   for (iram = 0; iram < 256; iram++) { 
      ram[iram] = iram;
   }
   FILE * fp; //Dosya okuma
   int ipar = 0;
   char dosya[40];
   char temp;
   char array[400];
   printf("Dosya adini girin:");
   gets(dosya); //Okunan dosyayi alma
   fp = fopen(dosya, "r"); // fp icerisine girilen dosyayi okuma

   if (fp != NULL) // Diziye text içersindeki metni yazdırma
   {
      while (temp != EOF) {
         temp = fgetc(fp);
         array[ipar] = temp;
         ipar++;
      }
   }
   int x, y, linecheck = 0;
   int len = strlen(array);
   for (x = 0; x < len; x++) { 
      if (array[x] == 10) { //enter degerini silme
         linecheck++; // Satir sayisini hesaplama
         for (y = x; y < len; y++) {
            array[y] = array[y + 1];
         }
         len = len - 1;
      }
   }
   for (linecheck; linecheck >= 0; linecheck--) { // Kod satiri kadar islem gerceklestirme

      if (array[isaret] == 'H') {
         HRK(array);
      } else if (array[isaret] == 'T') {
         TOP(array);
      } else if (array[isaret] == 'C' && array[isaret + 1] == 'I') {
         CIK(array);
      } else if (array[isaret] == 'C' && array[isaret + 1] == 'R') {
         CRP(array);
      } else if (array[isaret] == 'B') {
         BOL(array);
      } else if (array[isaret] == 'D') {
         DEG(array);
      } else if (array[isaret] == 'V' && array[isaret + 1] == 'E' && array[isaret + 2] == 'Y') {
         VEYA(array);
      } else if (array[isaret] == 'V' && array[isaret + 1] == 'E') {
         VE(array);
      } else {
         goto ending;
      }
   }
   ending: // Tekrari engellemek icin gerekli tag
   printf("AX:%u", AX); //%u : uint tanımlı degerler icin
   printf("\nBX:%u", BX);
   printf("\nCX:%u", CX);
   printf("\nDX:%u", DX);
   fclose(fp); // Dosya okuma islemini kapatir
}
