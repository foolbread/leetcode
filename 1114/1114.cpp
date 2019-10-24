class Foo {
public:
    mutex m1, m2;
    Foo() {
        this->m1.lock();
        this->m2.lock();
    }

    void first(function<void()> printFirst) {

        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();
        this->m1.unlock();
    }

    void second(function<void()> printSecond) {

        // printSecond() outputs "second". Do not change or remove this line.
        this->m1.lock();
        printSecond();
        this->m1.unlock();

        this->m2.unlock();
    }

    void third(function<void()> printThird) {

        // printThird() outputs "third". Do not change or remove this line.
        this->m2.lock();
        printThird();
        this->m2.unlock();

    }
};
