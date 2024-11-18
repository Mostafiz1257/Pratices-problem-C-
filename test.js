const people = [
    { name: 'John', age: 25, gender: 'male' },
    { name: 'Jane', age: 22, gender: 'female' },
    { name: 'Alice', age: 30, gender: 'female' },
    { name: 'Bob', age: 27, gender: 'male' }
];

const filterData= (arr)=>arr.filter(arr.gender==="female").map(a=>a.name)
console.log(filterData(people));