FROM mcr.microsoft.com/dotnet/core/sdk:3.1

LABEL "com.github.actions.name" = "Auto Release Milestone"
LABEL "com.github.actions.descriptions" = "A GitHub release based on a newly closed milestone"
LABEL version="0.1.0"
LABEL repository="https://github.com/tramnewin/testing"

RUN sudo apt-get update && sudo apt-get-install jq
RUN dotnet tool install -g GitReleaseManager.tool

ENV PATH /root/dotnet/tools:$PATH
COPY entrypoint.sh /
RUN chmod +x entrypoint.sh
ENTRYPOINT ["/entrypoint.sh"]