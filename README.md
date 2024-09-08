
---

# Constructors
## Experiment 12


## Aim:
Implement and use C++ Constructors and Destructors.

## Software Used:
Visual Studio Code.

## Theory:
### Constructor:
A special member function called automatically when an object is created. It initializes objects.

#### Basic Constructor
Has the same name as the class and no return type.
```cpp
class MyClass {
public:
    MyClass() { 
        cout << "Constructor called!" << endl;
    }
};
```

#### Parameterized Constructor
Takes arguments to initialize data members.
```cpp
class MyClass {
private:
    int x;
public:
    MyClass(int a) {  
        x = a;
        cout << "x initialized to " << x << endl;
    }
};
```

#### Copy Constructor
Creates a new object as a copy of an existing object.
```cpp
class MyClass {
private:
    int x;
public:
    MyClass(int a) {  
        x = a;
    }
    MyClass(const MyClass &obj) {  
        x = obj.x;
    }
    void display() {
        std::cout << "x = " << x << std::endl;
    }
};
```

### Destructor:
Cleans up when an object is destroyed. It has the same name as the class, preceded by `~`.
```cpp
class MyClass {
public:
    ~MyClass() {  
        std::cout << "Destructor called!" << std::endl;
    }
};
```

## Algorithms:
### Constructor in Class
1. **Define Class `date`**: With private members `d`, `m`, `y`.
2. **Constructor `date()`**: Prompt user for `d`, `m`, `y` and display date.
3. **In `main()`**: Create `today` object to trigger constructor.

### Destructor
1. **Global Variable**: `count` to track `Student` objects.
2. **Define Class `Student`**: Include constructor and destructor.
3. **Constructor `Student()`**: Increment `count` on creation.
4. **Destructor `~Student()`**: Decrement `count` on destruction.
5. **In `main()`**: Create and destroy `Student` objects, demonstrating count changes.

---

## Conclusion:
In C++, constructors initialize objects, ensuring they start in a valid state, while destructors clean up resources before objects are destroyed.
