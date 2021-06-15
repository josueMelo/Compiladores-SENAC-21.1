#include "tinyexpr.h"
#include <stdio.h>


double fact(double n) {
  if (n < 1) return 1;
  return n * fact(n - 1);
}


int main(int argc, char *argv[])
{
    const char *expression = "2 * fact(5) / 3";
    printf("Expressao:\n\t%s\n", expr);

    te_variable vars[] = {
        {"fact", fact, TE_FUNCTION1}
    };

    int err;
    te_expr *n = te_compile(expr, vars, 1, &err);

    if (n) {
        const double r = te_eval(n);
        printf("Result:\n\t%f\n", r);
        te_free(n);
    } else {
        printf("\t%*s^\nError", err-1, "");
    }

    return 0;
}
