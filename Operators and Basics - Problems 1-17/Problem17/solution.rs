use std::io;

fn main() {
    println!("Please enter a number to square: ");
    let mut num = String::new();

    io::stdin().read_line(&mut num).expect("Unable to read");

    let num : i32 = num.trim().parse().expect("Unable to convert to i32");

    println!("The square of {0} is {1}", num, num * num);
}

