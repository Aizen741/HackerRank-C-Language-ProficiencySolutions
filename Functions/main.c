#include <stdio.h>

int max_of_four(int a, int b, int c, int d){

    return ((a>b ? a:b) > (c>d ? c:d)) ? (a>b ? a:b) : (c>d ? c:d);

/*The ?: operator works as follows:

condition ? value_if_true : value_if_false

so return (a > b ? a : b);
could be rewritten as:
if(a > b)
    return b;
else
    return a;
*/

}

int main() {

    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}


