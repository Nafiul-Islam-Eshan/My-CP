#include <stdio.h>
#include <string.h>
int main()
{
    /**
     * strcmp(s1, s2) returns ---
     * নেগেটিভ মান : যদি s1 ডিকশনারিতে s2 এর আগে আসে। (যেমন: strcmp("Apple", "Banana") নেগেটিভ দেবে)।
     * পজিটিভ মান : যদি s1 ডিকশনারিতে s2 এর পরে আসে। (যেমন: strcmp("Zebra", "Apple") পজিটিভ দেবে)।
     * জিরো (0): যদি দুটি স্ট্রিং হুবহু এক হয়।
     */
    char a[70], b[70];
    printf("1st Word : ");
    fgets(a, 70, stdin);
    printf("2nd Word : ");
    fgets(b, 70, stdin);
    if(strcasecmp(a, b) < 0) printf("Lexicographically Smallest Word : %s", a);
    else if(strcasecmp(a, b) > 0) printf("Lexicographically Smallest Word : %s", b);
    else printf("Both are same");
}
