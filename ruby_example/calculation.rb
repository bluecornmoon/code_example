#!/usr/bin/ruby

def add(a, b)
    puts "ADDing #{a}+#{b}"
    a + b
end


def subtract(a ,b)
    puts "Subtract #{a} - #{b}"
    a - b
end

def multiply(a, b)
    puts "Multiply #{a} * #{b}"
    a * b
end

def divide(a, b)
    puts "Divide #{a}/#{b}"
    a/b
end



age = add(30, 5)
height = subtract(78, 4)
weight = multiply(90, 2)
iq = divide(100, 2)

puts "Age: #{age}, Height: #{height}, Weight: #{weight}, Iq: #{iq}"


what = add(age, subtract(height, multiply(weight,divide(iq, 2))))

puts "what value is #{what}"
