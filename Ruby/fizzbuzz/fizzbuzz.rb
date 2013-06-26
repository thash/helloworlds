class FizzBuzz
  def say(n)
    return "FizzBuzz" if fizzbuzz?(n)
    return "Fizz" if fizz?(n)
    return "Buzz" if buzz?(n)
    return n
  end
  
  private
  def fizz?(n)
    return n % 3 == 0
  end
  
  private
  def buzz?(n)
    return n % 5 == 0
  end
  
  private
  def fizzbuzz?(n)
    return fizz?(n) && buzz?(n)
  end

end
