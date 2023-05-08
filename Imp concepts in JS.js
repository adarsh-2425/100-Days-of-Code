//Object
let employee = {
    name: 'Adarsh',
    age: 24,
    getAge: ()  => {
        console.log('age is '+ employee.age);
    }
};

employee.getAge();

//Factory function
function createPerson(name, age) {
    return {
        name: name,
        age: age
        }
}

const person1 = createPerson('Puppy', -5);
console.log(person1);

// //Constructor
class Person {
    constructor(name, age) {
        this.name = name;
        this.age = age;
    }
}

const person2 = new Person('Lol', 24);
console.log(person2);










