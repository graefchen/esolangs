#include <stdio.h>
typedef short int I;typedef char C;typedef void V;
C a[65535] = {0};I p = 0;I s[32];I si=0;
V sa(I p){s[si]=p;si++;}
I sp(V){return s[--si];}
I mr(C *c, I i) {
  I s = 1;
  if (a[p] == 0) {
    while (s!=0) {
      if (c[i] == '[')
        s++;
      if (c[i] == ']')
        s--;
      i++;
    }
  }
  return --i;
}
I ml(C *c, I i) {
  I s = 1;
  if (a[p] != 0) {
    while (s!=0) {
      if (c[i] == ']')
        s++;
      if (c[i] == '[')
        s--;
      i--;
    }
  }
  return ++i;
}
V r(C *c) {
  for (I i = 0; c[i] != '\0'; i++) {
    switch (c[i]) {
    case ('+'):
      a[p]++;
      break;
    case ('-'):
      a[p]--;
      break;
    case ('>'):
      p++;
      break;
    case ('<'):
      p--;
      break;
    case ('.'):
      printf("%c", a[p]);
      break;
    case (','):
      a[p] = getchar();
      break;
    case ('['):
      i = mr(c, i+1);
      break;
    case (']'):
      i = ml(c, i-1);
      break;
    }
  }
}
int main(int c, C **v) {
  {
    C c[1024];
    printf("bf> ");
    if (!fgets(c, sizeof(c), stdin)) {
      printf("\n");
    }
    r(c);
  }
  return 0;
}
