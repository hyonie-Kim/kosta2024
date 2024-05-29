
enum GenderType {
Male=0,
Female = 1,
}

interface Student {
    studentId?: number;
    studentName?: string;
    age?: number;
    gender?: GenderType;
    completed?:boolean;
    setName?:(name:string) => void;
    getName?:()=> string;
}

function getInfo(id:number):Student{
    return {
        studentId:id,
        age:20,
        gender:GenderType.Female,
        completed:true
    } 
}
// function setInfo(){

// }

function 

let std ={
    studentId =1111,
    age :30;
    gender
}