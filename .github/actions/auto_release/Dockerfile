FROM mcr.microsoft.com/dotnet/core/sdk:3.1

LABEL "com.github.actions.name" = "Auto Release Milestone"
LABEL "com.github.actions.descriptions" = "A GitHub release based on a newly closed milestone"
LABEL version="0.1.0"
LABEL repository="https://github.com/tramnewin/testing"

RUN apt-get update && apt-get install -y jq
RUN dotnet tool install -g GitReleaseManager.tool

ENV PATH /root/.dotnet/tools:$PATH
ENV DOTNET_CLI_TELEMETRY_OPTOUT 1
COPY entrypoint.sh /
RUN chmod +x entrypoint.sh
ENTRYPOINT ["/entrypoint.sh"]