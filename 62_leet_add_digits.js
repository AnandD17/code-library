function addDigits(num) {
    if (num === 0) {
        return 0;
    } else {
        return 1 + ((num - 1) % 9);
    }
}