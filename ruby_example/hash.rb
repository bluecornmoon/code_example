#!/usr/bin/ruby

def death()
    quips = ["You died. You kinda such at this.",
             "Nice job, you died ...jackass.",
             "such a luser.",
             "I have a samll puppy that's better at this."]
    puts quips[rand(quips.length())]
    Process.exit(0)
end

def central_corridor()
    puts "TEST"
    return :laser_weapon_armory
end

def laser_weapon_armory()

    code = "%s%s%s" %[rand(9)+1, rand(9)+1, rand(9)+1]
    puts code
    print "[Keypad]>"
    guess = gets.chomp()
    guesses = 0

    while guess != code and guesses < 10
        puts "XXXXXXXX"
        guesses += 1
        print "[Ketpad]>"
        guess = gets.chomp()
    end

    if guess == code
        puts " Next one"
        return :escape_pod
    else
        return :death
    end
end

def escape_pod()
    
    good_pod = rand(5) + 1
    puts good_pod
    print "[pod #]>"
    guess = gets.chomp()

    if guess.to_i != good_pod
        return :death
    else
        puts " congratulation"
        Process.exit(0)
    end
end


ROOM = {
    :death => method(:death),
    :central_corridor => method(:central_corridor),
    :laser_weapon_armory => method(:laser_weapon_armory),
    :escape_pod => method(:escape_pod)
}

def runner(map, start)
    next_one = start

    while true
        room = map[next_one]
        puts "\n----------------"
        next_one = room.call()
    end
end


runner(ROOM, :central_corridor)
