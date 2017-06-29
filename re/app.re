open ReactNative;

type person = {
  id: int,
  age: int,
  name: string
};

let matt = {id: 1, age: 35, name: "Matt"};

let char = {id: 2, age: 34, name: "Char"};

let levi = {id: 3, age: 35, name: "Levi"};

let lucas = {id: 4, age: 35, name: "Lucas"};

let people = [|matt, char, levi, lucas|];

let elements =
  Array.map (fun person => <Text key=(string_of_int person.id) value=person.name />) people;

let app () =>
  <View style=Style.(style [flex 1., justifyContent `center, alignItems `center])>
    (ReasonReact.arrayToElement elements)
  </View>;