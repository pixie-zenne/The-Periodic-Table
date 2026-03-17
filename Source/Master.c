#define master main

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Module00-The_Elements.c"

void ThePeriodicTable(void) {
  printf("\n1\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t2");
  printf("\nH\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tHe\n");

  printf("\n3\t4\t\t\t\t\t\t\t\t\t\t\t\t5\t6\t7\t8\t9\t10");
  printf("\nLi\tBe\t\t\t\t\t\t\t\t\t\t\t\tB\tC\tN\tO\tF\tNe\n");

  printf("\n11\t12\t\t\t\t\t\t\t\t\t\t\t\t13\t14\t15\t16\t17\t18");
  printf("\nNa\tMg\t\t\t\t\t\t\t\t\t\t\t\tAl\tSi\tP\tS\tCl\tAr\n");

  printf("\n19\t20\t\t21\t22\t23\t24\t25\t26\t27\t28\t29\t30\t31\t32\t33\t34\t35\t36");
  printf("\nK\tCa\t\tSc\tTi\tV\tCr\tMn\tFe\tCo\tNi\tCu\tZn\tGa\tGe\tAs\tSe\tBr\tKr\n");

  printf("\n37\t38\t\t39\t40\t41\t42\t43\t44\t45\t46\t47\t48\t49\t50\t51\t52\t53\t54");
  printf("\nRb\tSr\t\tY\tZr\tNb\tMo\tTc\tRu\tRh\tPd\tAg\tCd\tIn\tSn\tSb\tTe\tI\tXe\n");

  printf("\n55\t56\t57-70\t71\t72\t73\t74\t75\t76\t77\t78\t79\t80\t81\t82\t83\t84\t85\t86");
  printf("\nCs\tBa\t*\tLu\tHf\tTa\tW\tRe\tOs\tIr\tPt\tAu\tHg\tTl\tPb\tBi\tPo\tAt\tRn\n");

  printf("\n87\t88\t89-102\t103\t104\t105\t106\t107\t108\t109\t110\t111\t112\t113\t114\t115\t116\t117\t118");
  printf("\nFr\tRa\t**\tLr\tRf\tDb\tSg\tBh\tHs\tMt\tDs\tRg\tCn\tNh\tFl\tMc\tLv\tTs\tOg\n");

  printf("\n\t\t*\t57\t58\t59\t60\t61\t62\t63\t64\t65\t66\t67\t68\t69\t70");
  printf("\n\t\t\tLa\tCe\tPr\tNd\tPm\tSm\tEu\tGd\tTb\tDy\tHo\tEr\tTm\tYb\n");

  printf("\n\t\t**\t89\t90\t91\t92\t93\t94\t95\t96\t97\t98\t99\t100\t101\t102");
  printf("\n\t\t\tAc\tTh\tPa\tU\tNp\tPu\tAm\tCm\tBk\tCf\tEs\tFm\tMd\tNo");

  return;
}

int master(void) {
  bool IsProgramRunning = true;

  char UserInput[8];
  int Selection = 0;

  ThePeriodicTable();
  printf("\n\nPlease select an element by its number in the table");
  printf("To exit the program, pleast type \"exit\"");
  while(IsProgramRunning == true) {
    printf("User: ");
    fgets(UserInput, sizeof(UserInput), stdin);
    UserInput[strcspn(UserInput, "\n")] = '\0';
    Selection = atoi(UserInput);

    // exit

    // select

    fflush(stdin);
  }

  return 0;
}
