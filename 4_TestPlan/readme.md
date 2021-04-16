# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P**   | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|-------------- |-------------|----------------|------------------|
|  H_01       |password is correct or not                                    |Password string|successful  | PASS            |Requirement based |
|  H_02       |if search for an account is successful                        |  Array of structure,number of entries and account number to be searched |0|PASS |Requirement based |
|  H_03       | functions                                                    | Function call |successfull |PASS             |Requirement based    |

## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |if account number is unique-|  Account number|re-enter Account number|if unique:PASS,otherwise "Re-enter Account Number"|Requirement based |
|  L_02       |--------------------------------------------------------------|  ------------|-------------|----------------|Scenario based    |
|  L_03       |--------------------------------------------------------------|  ------------|-------------|----------------|Boundary based    |
