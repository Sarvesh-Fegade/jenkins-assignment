pipeline{
    agent any
    stages {
        stage('Build'){
            steps{
                echo 'Building Makefile'
                sh 'make'
            }
        }
        stage('Run'){
            steps{
                echo 'Executing program'
                sh './main'
            }
        }   
    }
}