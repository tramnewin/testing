FROM sonarsource/sonar-scanner-cli:4.7

LABEL version="V2.0" \
      repository="hhttps://github.com/tramnewin/testing" \
      com.github.actions.name="SonarQube Scan" \
      com.github.actions.description="Scan your code with SonarQube to detect Bugs, Vulnerabilities and Code Smells in up to 27 programming languages!"


RUN -d --name sonarqube -e
RUN SONAR_ES_BOOTSTRAP_CHECKS_DISABLE=true -p 9000:9000 sonarqube:latest
COPY entrypoint.sh /entrypoint.sh
RUN chmod +x /entrypoint.sh
ENTRYPOINT ["/entrypoint.sh"]