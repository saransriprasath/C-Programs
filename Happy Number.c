bool isHappy(int n) {
    int slow = n, fast = n;

    while (1) {
        int sum = 0;
        int temp = slow;
        while (temp > 0) {
            int d = temp % 10;
            sum += d * d;
            temp /= 10;
        }
        slow = sum;
        for (int i = 0; i < 2; i++) {
            sum = 0;
            temp = fast;
            while (temp > 0) {
                int d = temp % 10;
                sum += d * d;
                temp /= 10;
            }
            fast = sum;
        }

        if (slow == fast)
            break;
    }

    return slow == 1;
}
