#!/usr/bin/ruby

class Game

    def initialize(start)
        @quips = ["You died. You kinda such at this.",
                 "Nice job, you died ...jackass.",
                 "such a luser.",
                 "I have a samll puppy that's better at this."]
        @start = start
        puts "in init @start = " + @start.inspect
    end

    def central_corridor()
        puts "TEST"
        return :laser_weapon_armory
    end

    def death()
        puts @quips[rand(@quips.length())]
        Process.exit(1)
    end

    def laser_weapon_armory()

        code = "%s%s%s" %[rand(9)+1, rand(9)+1, rand(9)+1]
        puts code
        print "[Keypad]>"
        guess = gets.chomp()
        guesses = 0

        while guess != code and guesses < 5
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

    def play()
        puts "@start => " + @start.inspect
        next_one = @start

        while true
            puts "\n----------------"
            room = method(next_one)
            next_one = room.call()
        end
    end


end

a_game = Game.new(:central_corridor)
a_game.play()

