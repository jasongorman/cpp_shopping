#noinspection CucumberUndefinedStep
Feature: Calculate the total of items in a shopping basket

  Scenario: An empty basket
    Given an empty shopping basket
    When the basket total is calculated
    Then the total should be 0.00

  Scenario: A single item with a quantity of 1
    Given the shopping basket contains:
      | Price | Quantity |
      | 9.99  | 1        |
    When the basket total is calculated
    Then the total should be 9.99

  Scenario: Two items each with a quantity of 1
    Given the shopping basket contains:
      | Price | Quantity |
      | 9.99  | 1        |
      | 4.50  | 1        |
    When the basket total is calculated
    Then the total should be 14.49

  Scenario: A single item with a quantity of 2
    Given the shopping basket contains:
      | Price | Quantity |
      | 7.25  | 2        |
    When the basket total is calculated
    Then the total should be 14.50