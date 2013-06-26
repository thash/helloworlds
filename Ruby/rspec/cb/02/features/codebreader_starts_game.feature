Feature: code-breaker starts game
  
  Scenario: start game
    Given I am not yet playing
    When I start a new game
    Then I should see "Welcome to Codebreader!"
    And I should see "Enter guess:"

