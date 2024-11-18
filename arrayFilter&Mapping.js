const people = [
    { name: "Alice", age: 30, gender: "female" },
    { name: "Bob", age: 25, gender: "male" },
    { name: "Charlie", age: 28, gender: "male" },
    { name: "Diana", age: 22, gender: "female" }
  ];
// ['bob','charlie']
//   const filterMale = (arr)=>arr.filter(person=>person.gender==="male").map(person=>person.name)

//   const ans = filterMale(people);
//   console.log(ans);

const resultFunction=(arr)=>{
return  res = arr.map(s=>s.name)
}

// const sortByYear = (arr) => arr.sort((a, b) => a.age - b.age);

const updateAgeByName = (arr, name, newAge) => {
    const person = arr.find(person => person.name === "mahfuz");
    if (person) {
      person.age = newAge;
    }
    return arr;
  };
console.log( updateAgeByName(people,"Bob",12));



