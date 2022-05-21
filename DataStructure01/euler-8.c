#include <stdio.h>

int main() {
    // Find the thirteen adjacent digits in the 1000-digit number that have the greatest product. What is the value of this product?
    /**
     * 滑动窗口法
     * 连续13个数字的乘积，时间复杂度O(2n)=>O(n)
     * now: 当前窗口乘积
     * ans：最终答案（最终答案）   23514624000
     * cnt：计数器 窗口当中0的数量
     *      如果加进窗口里面的值是0，这个数字就不乘，计数器加1
     *      一旦某一时刻出窗口的数字是0，不除，计数器减去1
     * 更新答案时：必须保证计数器为0时才可以更新答案
     * 即：进窗口、出窗口、更新答案时，都需要进行判断
     */
    char str[1005]; // 长度至少是1001，所以开到1005
    scanf("%s", str);
    long long now = 1, ans = 0, cnt = 0;
    for(int i = 0; i < 1000; i++){
        // 前13位是没有0的，所以可以直接初始化
        if (i < 13) {
            // 为什么要减去字符'0'？ 字符数组中是以字符的形式存储的，通过减去字符'0'可以得到相应的数字。比如'9' - '0' => 9
            now *= str[i] - '0'; // 直接把新加入的数字诚到窗口当中作为乘积
        } else {
            // 判断新进来的这一位是否为0。
            // 进窗口——是0：计数器加1； 不是0：直接乘进来
            // 出窗口——是0：计数器减1； 不是0：除掉
            if (str[i] == '0') {
                cnt++;
            } else {
                now *= str[i] - '0';
            }
            if (str[i - 13] == '0') {
                cnt--;
            } else {
                now /= str[i - 13] - '0';
            }
        }
        // 更新答案：当前窗口没有0，并且ans小于当前窗口的乘积
        if (cnt == 0 && ans < now) {
            ans = now;
        }
    }
    printf("%lld\n", ans); // %lld
    return 0;
}