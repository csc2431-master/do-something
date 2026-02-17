function ProcessList(list, callback){
  return callback(list);
}

function SumNumbers(list){
  return list.reduce((sum, n) => sum + n, 0);
}

function PrintNumbers(list){
  for (const n of list)
    console.log(n);
}

const data = [3, 4, 1, 9];

// --- Add the values together
sum = ProcessList(data, SumNumbers);
console.log(sum);
console.log("\n");

// --- Print the Numbers
ProcessList(data, PrintNumbers);
console.log("\n");



